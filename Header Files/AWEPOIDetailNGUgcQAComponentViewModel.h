//
//     Generated by private class-dump
//

@class AWEPOIFeedUgcQAEntranceInfoModel, AWEPOIDetailNGPageContext, AWEPOIDetailNGUgcQAComponentView, NSNumber;

@interface AWEPOIDetailNGUgcQAComponentViewModel : DitoComponentViewModel {
    AWEPOIDetailNGUgcQAComponentView *_componentView;
    AWEPOIFeedUgcQAEntranceInfoModel *_info;
    NSNumber *_bottomMargin;
}

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (weak, nonatomic) AWEPOIDetailNGUgcQAComponentView *componentView;
@property (retain, nonatomic) AWEPOIFeedUgcQAEntranceInfoModel *info;
@property (retain, nonatomic) NSNumber *bottomMargin;

+ (BOOL)didReachBottomWithScrollView:(id)arg0;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (void)bindStateAndAction;
- (void)pageView:(id)arg0 didScroll:(id)arg1;
- (BOOL)canFloatingQAButton;
- (void)parseData:(id)arg0;
- (id)info;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg0;
- (void)setInfo:(id)arg0;
- (id)bottomMargin;
- (void)setComponentView:(id)arg0;
- (id)componentView;
- (void)setBottomMargin:(id)arg0;

@end
