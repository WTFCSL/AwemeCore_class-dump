//
//     Generated by private class-dump
//

@class AWEVideoDescriptionPanelRetryView;

@interface AWEVideoDescriptionPanelRetrySectionController : AWEBaseListSectionController {
    AWEVideoDescriptionPanelRetryView *_retryView;
}

@property (retain, nonatomic) AWEVideoDescriptionPanelRetryView *retryView;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (id)cellIdentifierForModel:(id)arg0 index:(long long)arg1;
- (id)retryView;
- (void)setRetryView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)sectionBackgroundColor;

@end