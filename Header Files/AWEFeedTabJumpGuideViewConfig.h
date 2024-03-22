//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEFeedTabJumpGuideViewConfig : NSObject {
    NSString *_hintLabel;
    NSString *_buttonTitle;
    NSArray *_imageURLList;
    unsigned long long _iconPosition;
    id /* block */ _btnClickBlock;
}

@property (copy, nonatomic) NSString *hintLabel;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSArray *imageURLList;
@property (nonatomic) unsigned long long iconPosition;
@property (copy, nonatomic) id /* block */ btnClickBlock;

- (void)setIconPosition:(unsigned long long)arg0;
- (unsigned long long)iconPosition;
- (id)imageURLList;
- (void)setImageURLList:(id)arg0;
- (void)setBtnClickBlock:(id /* block */)arg0;
- (id /* block */)btnClickBlock;
- (void).cxx_destruct;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;

@end
