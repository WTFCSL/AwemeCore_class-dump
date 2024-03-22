//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEProfileEditSubmitContext : NSObject {
    BOOL _ifChangeUniqueID;
    BOOL _ifChangeImage;
    BOOL _showsSuccessToast;
    BOOL _allowUserInteractionWhenLoading;
    BOOL _callCompletionGuarantee;
    NSDictionary *_params;
}

@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL ifChangeUniqueID;
@property (nonatomic) BOOL ifChangeImage;
@property (nonatomic) BOOL showsSuccessToast;
@property (nonatomic) BOOL allowUserInteractionWhenLoading;
@property (nonatomic) BOOL callCompletionGuarantee;

+ (id)contextWithBlock:(id /* block */)arg0;

- (void)setIfChangeImage:(BOOL)arg0;
- (void)setShowsSuccessToast:(BOOL)arg0;
- (void)setCallCompletionGuarantee:(BOOL)arg0;
- (void)setAllowUserInteractionWhenLoading:(BOOL)arg0;
- (void)setIfChangeUniqueID:(BOOL)arg0;
- (BOOL)callCompletionGuarantee;
- (BOOL)ifChangeUniqueID;
- (BOOL)allowUserInteractionWhenLoading;
- (BOOL)showsSuccessToast;
- (BOOL)ifChangeImage;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:(id)arg0;

@end
