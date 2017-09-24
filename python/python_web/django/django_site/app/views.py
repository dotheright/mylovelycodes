#!/usr/bin/env python
# -*- coding :utf-8 -*-

import os

from app.forms import MomentForm
from django.http import HttpResponseRedirect
from django.core.urlresolvers import reverse
from django.shortcuts import render

# Create your views here.
from django.http import HttpResponse

def welcom(request):
    if request.method =="POST":
        form =MomentForm(request.POST)
        if  form.is_valid() :
            moment =form.save()
            moment.save()
            return HttpResponseRedirect(reverse("app.view.welcome"))
    else:
        form =MomentForm()
    PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    print PROJECT_ROOT
    return render(request, os.path.join(PROJECT_ROOT, 'app/templates', 'moments_input.html'), {'form': form})  
