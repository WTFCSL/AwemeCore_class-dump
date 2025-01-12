//
//     Generated by private class-dump
//

@class NSString;
@protocol CJPayLoadingManagerProtocol;

@interface CJPayBaseLoadingItem : NSObject <CJPayAdvanceLoadingProtocol> {
    id<CJPayLoadingManagerProtocol> _delegate;
}

@property (weak, nonatomic) id<CJPayLoadingManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadingType;

- (void)addLoadingCount;
- (void)resetLoadingCount;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
