//
//     Generated by private class-dump
//

@class UIView;

@interface AWEImmersiveDetailCell : AWEAwemeDetailTableViewCell {
    double _fakeSeperatorHeight;
    double _cornerRadius;
    UIView *_fakeSeperator;
}

@property (retain, nonatomic) UIView *fakeSeperator;
@property (nonatomic) double fakeSeperatorHeight;
@property (nonatomic) double cornerRadius;

- (Class)interactionControllerClassType;
- (void)replaceCurrentViewContoller:(id)arg0;
- (void)setFakeSeperatorHeight:(double)arg0;
- (void)refreshFakeSeperator;
- (double)fakeSeperatorHeight;
- (id)fakeSeperator;
- (void)setFakeSeperator:(id)arg0;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)layoutSubviews;
- (void)reset;
- (void)setCornerRadius:(double)arg0;
- (void)setParentVC:(id)arg0;

@end