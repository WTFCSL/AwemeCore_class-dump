//
//     Generated by private class-dump
//

@class IESECWindowFeedProductCardViewModel;

@interface IESECWindowFeedProductCardSectionController : IGListSectionController {
    IESECWindowFeedProductCardViewModel *_viewModel;
}

@property (readonly, nonatomic) id viewModel;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (id)viewModel;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
