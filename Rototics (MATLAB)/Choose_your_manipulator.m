function varargout = Choose_your_manipulator(varargin)
% CHOOSE_YOUR_MANIPULATOR MATLAB code for Choose_your_manipulator.fig
%      CHOOSE_YOUR_MANIPULATOR, by itself, creates a new CHOOSE_YOUR_MANIPULATOR or raises the existing
%      singleton*.
%
%      H = CHOOSE_YOUR_MANIPULATOR returns the handle to a new CHOOSE_YOUR_MANIPULATOR or the handle to
%      the existing singleton*.
%
%      CHOOSE_YOUR_MANIPULATOR('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in CHOOSE_YOUR_MANIPULATOR.M with the given input arguments.
%
%      CHOOSE_YOUR_MANIPULATOR('Property','Value',...) creates a new CHOOSE_YOUR_MANIPULATOR or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Choose_your_manipulator_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Choose_your_manipulator_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Choose_your_manipulator

% Last Modified by GUIDE v2.5 03-Oct-2018 09:58:38

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Choose_your_manipulator_OpeningFcn, ...
                   'gui_OutputFcn',  @Choose_your_manipulator_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before Choose_your_manipulator is made visible.
function Choose_your_manipulator_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Choose_your_manipulator (see VARARGIN)

% Choose default command line output for Choose_your_manipulator
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Choose_your_manipulator wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Choose_your_manipulator_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in Articulated_2D.
function Articulated_2D_Callback(hObject, eventdata, handles)
% hObject    handle to Articulated_2D (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
open('Articulated_2D.fig')

% --- Executes on button press in SCARA.
function SCARA_Callback(hObject, eventdata, handles)
% hObject    handle to SCARA (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
open('SCARA.fig')


% --- Executes on button press in Spherical_Wrist.
function Spherical_Wrist_Callback(hObject, eventdata, handles)
% hObject    handle to Spherical_Wrist (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
open('Spherical_Wrist.fig')

% --- Executes on button press in Articulated_3D.
function Articulated_3D_Callback(hObject, eventdata, handles)
% hObject    handle to Articulated_3D (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
open('Articulated_3D.fig')

% --- Executes on button press in Spherical.
function Spherical_Callback(hObject, eventdata, handles)
% hObject    handle to Spherical (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
open('Spherical.fig')

% --- Executes on button press in Cylinderical.
function Cylinderical_Callback(hObject, eventdata, handles)
% hObject    handle to Cylinderical (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
open('Cylinderical.fig')

% --- Executes on button press in Cartesian.
function Cartesian_Callback(hObject, eventdata, handles)
% hObject    handle to Cartesian (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
open('Cartesian.fig')

% --- Executes on button press in Parallel.
function Parallel_Callback(hObject, eventdata, handles)
% hObject    handle to Parallel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
open('Parallel.fig')
