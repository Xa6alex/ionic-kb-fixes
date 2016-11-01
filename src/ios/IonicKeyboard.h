#import <Cordova/CDVPlugin.h>
#import <objc/runtime.h>



@interface IonicKeyboard : CDVPlugin <UITextFieldDelegate, UIScrollViewDelegate> {
    @protected
    id _keyboardShowObserver, _keyboardHideObserver;
    IMP wkOriginalImp, uiOriginalImp, nilImp;
    Method wkMethod, uiMethod;
}

@property (readwrite, assign) BOOL hideKeyboardAccessoryBar;
@property (readwrite, assign) BOOL disableScroll;
@property (readwrite, assign) BOOL moveTop;
//@property (readwrite, assign) BOOL styleDark;

@property (nonatomic, strong) UITextField *txtFld;

@end

