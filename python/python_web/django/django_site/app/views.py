from django.shortcuts import render

# Create your views here.
from django.http import HttpResponse

def welcom(request):
    return HttpResponse("<h1>Welcome to my tiny space !</h1>")
