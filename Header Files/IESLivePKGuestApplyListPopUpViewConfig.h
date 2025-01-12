//
//     Generated by private class-dump
//

@class UIImage, NSAttributedString, NSString;

@interface IESLivePKGuestApplyListPopUpViewConfig : NSObject {
    BOOL _isPreApply;
    UIImage *_topLeftImage;
    NSAttributedString *_topAttributeTitle;
    NSString *_topRightTitle;
    long long _linkMicStatus;
}

@property (retain, nonatomic) UIImage *topLeftImage;
@property (retain, nonatomic) NSAttributedString *topAttributeTitle;
@property (copy, nonatomic) NSString *topRightTitle;
@property (nonatomic) long long linkMicStatus;
@property (nonatomic) BOOL isPreApply;

- (long long)linkMicStatus;
- (void)setLinkMicStatus:(long long)arg0;
- (id)topLeftImage;
- (void)setTopLeftImage:(id)arg0;
- (id)topAttributeTitle;
- (void)setTopAttributeTitle:(id)arg0;
- (BOOL)isPreApply;
- (void)setIsPreApply:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)topRightTitle;
- (void)setTopRightTitle:(id)arg0;

@end
