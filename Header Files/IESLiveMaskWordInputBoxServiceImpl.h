//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface IESLiveMaskWordInputBoxServiceImpl : NSObject <IESLiveMaskWordInputBoxService> {
    UIView *_popupView;
}

@property (retain, nonatomic) UIView *popupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPopupView:(id)arg0;
- (id)popupView;
- (void)keyBoardWillShow:(id)arg0;
- (void)openMaskWordInputBox:(long long)arg0 placeHolder:(id)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;
- (void)addObserver;

@end
