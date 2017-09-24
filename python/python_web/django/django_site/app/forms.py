#!/usr/bin/env python
# -*- coding: utf-8 -*- 

#########################################################################
# File Name: forms.py
# Author: guoqingyao
# mail: stepbystepto@163.com
# Created Time: 2017年09月24日 星期日 09时41分59秒
#########################################################################
from django.forms import ModelForm
from app.models import Moment

class MomentForm(ModelForm):
    class Meta:
        model = Moment
        fields ='__all__'
        
