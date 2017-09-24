# -*- coding:utf-8 -*-
from __future__ import unicode_literals
from django.db import models

KIND_CHOICES =(
    ('python','python'),
    ('English','English'),
    ('Other','Other'),
)

# Create your models here.

class Moment(models.Model):
    content =models.CharField(max_length=256)
    user_name =models.CharField(max_length=32,default="anonymity")
    kind = models.CharField(max_length=32,choice =KIND_CHOICES,
                            defaut=KIND_CHOICES[0]);
