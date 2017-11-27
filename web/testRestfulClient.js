function sendRestfulGet(){
    var doubanURL = 'https://api.douban.com//v2/movie/top250';
    var data ;
    $.ajax({
        url: doubanURL,
        type: 'Get',
        data: '',
        dataType: 'JSONP',
        crossDomain: true,
        
        success: function(data){
            console.log(data);
             var num=data.count >10? data.count-10:date.count-1;
             alert(data.subjects[num].title)
        }
    });
   
}