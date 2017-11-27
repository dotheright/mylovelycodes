App = Ember.Application.create();  //instance

App.Router.map(function() {
  // put your routes here 使用App.Route.map定义应用的路由。
  //每个Ember应用都有一个默认路由Index，绑定到/。
  //所以，当调用/路由的时候，index模板将被渲染。
  //index模板由index.html定义。感觉到了很多“约定大于配置”了吧？

   this.resource('index',{path : '/'},function(){
        this.resource('story', { path:'/stories/:story_id' });
    });

    this.resource('newstory' , {path : 'story/new'});
});



App.ApplicationAdapter = DS.LSAdapter.extend({
  namespace: 'stories'
});


App.Story = DS.Model.extend({
    url : DS.attr('string'),
    tags : DS.attr('string'),
    fullname : DS.attr('string'),
    title : DS.attr('string'),
    excerpt : DS.attr('string'),
    submittedOn : DS.attr('date')

});


// NewstoryController
App.NewstoryController = Ember.ObjectController.extend({

 actions :{
    save : function(){
        var url = $('#url').val();
        var tags = $('#tags').val();
        var fullname = $('#fullname').val();
        var title = $('#title').val();
        var excerpt = $('#excerpt').val();
        var submittedOn = new Date();
        var store = this.get('store');
        var story = store.createRecord('story',{
            url : url,
            tags : tags,
            fullname : fullname,
            title : title,
            excerpt : excerpt,
            submittedOn : submittedOn
        });
        story.save();

        this.transitionToRoute('index');
    }
 }
});

App.IndexRoute = Ember.Route.extend({
    model : function(){
        var stories = this.get('store').findAll('story');
        return stories;
    }
});