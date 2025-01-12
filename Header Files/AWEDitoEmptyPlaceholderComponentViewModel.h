//
//     Generated by private class-dump
//

@class NSString, AWEDitoEmptyPlaceholderComponentView;

@interface AWEDitoEmptyPlaceholderComponentViewModel : DitoComponentViewModel <AWEDitoEmptyPlaceholderDelegate> {
    AWEDitoEmptyPlaceholderComponentView *_cell;
    NSString *_mainTitle;
    NSString *_subTitle;
    NSString *_actionTitle;
    NSString *_backgroundColorHex;
    NSString *_clickEventName;
}

@property (copy, nonatomic) NSString *clickEventName;
@property (weak, nonatomic) AWEDitoEmptyPlaceholderComponentView *cell;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *backgroundColorHex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backgroundColorHex;
- (void)setBackgroundColorHex:(id)arg0;
- (id)clickEventName;
- (void)updateNode:(id)arg0;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (void)bindStateAndAction;
- (void)setClickEventName:(id)arg0;
- (id)actionTitle;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg0;
- (void)setActionTitle:(id)arg0;
- (void)updateWithData:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)cell;
- (void)setCell:(id)arg0;
- (void)didTapActionButton;
- (id)mainTitle;
- (void)setMainTitle:(id)arg0;

@end
