﻿using System.ComponentModel;

namespace ObjectOrientedDrawingOfObjects.ViewModel
{
    class BaseViewModel : INotifyPropertyChanged
    {
        public event PropertyChangedEventHandler PropertyChanged;

        protected void OnPropertyChanged(string propertyName) 
        {
            if(PropertyChanged != null)
                PropertyChanged(this, new PropertyChangedEventArgs(propertyName)); 
        }
    }
}
