#import <Cordova/CDVPlugin.h>
#import <objc/runtime.h>



@interface IonicKeyboard : CDVPlugin <UIScrollViewDelegate> {
    @protected
    id _keyboardShowObserver, _keyboardHideObserver;
    IMP wkOriginalImp, uiOriginalImp, nilImp;
    Method wkMethod, uiMethod;
}

@property (readwrite, assign) BOOL hideKeyboardAccessoryBar;
@property (readwrite, assign) BOOL disableScroll;
@property (readwrite, assign) BOOL moveTop;
//@property (readwrite, assign) BOOL styleDark;

@end


@interface IonicKeyboardTextField : UIViewController<UITextFieldDelegate> {
    IBOutlet UIWebView *webView;
}
@end
