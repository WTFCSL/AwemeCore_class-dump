//
//     Generated by private class-dump
//

@protocol CJPayLoadingManagerProtocol;

@interface CJPayDouyinHalfLoadingItem : CJPayHalfLoadingItem {
    id<CJPayLoadingManagerProtocol> _delegate;
}

+ (long long)loadingType;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)startAnimation;
- (id)loadingTitle;

@end