//
//     Generated by private class-dump
//

@class NSMutableArray, UIStackView;

@interface IESLiveChatChannelToolbar : UIView {
    BOOL _isActiving;
    UIStackView *_toolbar;
    NSMutableArray *_packViews;
}

@property (retain, nonatomic) UIStackView *toolbar;
@property (retain, nonatomic) NSMutableArray *packViews;
@property (nonatomic) BOOL isActiving;

- (id)renderWithItem:(id)arg0;
- (BOOL)isActiving;
- (id)packViews;
- (void)setIsActiving:(BOOL)arg0;
- (void)unactive;
- (void)setPackViews:(id)arg0;
- (id)toolbar;
- (id)init;
- (void)active;
- (void).cxx_destruct;
- (void)reloadWithItems:(id)arg0;
- (void)setToolbar:(id)arg0;
- (void)setupUI;

@end
