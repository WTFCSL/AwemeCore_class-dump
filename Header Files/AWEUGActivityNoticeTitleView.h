//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface AWEUGActivityNoticeTitleView : UIView <AWEUGActivityNoticeTitleViewProtocol> {
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)startPullAnimation:(BOOL)arg0;
- (void)setupBasicViews;
- (void)hideDescLabel;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)reset;
- (void)setTitleLabel:(id)arg0;

@end
