//
//     Generated by private class-dump
//

@class NSString, UIColor;

@interface IESLiveUGCVideoPreviewConfig : NSObject {
    BOOL _needHideAfterButtonClicked;
    NSString *_videoURL;
    NSString *_buttonTitle;
    UIColor *_buttonBgColor;
    UIColor *_buttonTextColor;
    id /* block */ _buttonClickedAction;
    id /* block */ _didTapPreviewContainer;
}

@property (copy, nonatomic) NSString *videoURL;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIColor *buttonBgColor;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (copy, nonatomic) id /* block */ buttonClickedAction;
@property (copy, nonatomic) id /* block */ didTapPreviewContainer;
@property (nonatomic) BOOL needHideAfterButtonClicked;

- (void)setButtonBgColor:(id)arg0;
- (id)buttonBgColor;
- (void)setButtonClickedAction:(id /* block */)arg0;
- (id /* block */)buttonClickedAction;
- (void)setNeedHideAfterButtonClicked:(BOOL)arg0;
- (void)setDidTapPreviewContainer:(id /* block */)arg0;
- (id /* block */)didTapPreviewContainer;
- (BOOL)needHideAfterButtonClicked;
- (id)videoURL;
- (void).cxx_destruct;
- (id)buttonTextColor;
- (id)buttonTitle;
- (void)setButtonTextColor:(id)arg0;
- (void)setVideoURL:(id)arg0;
- (void)setButtonTitle:(id)arg0;

@end
