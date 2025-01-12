//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPlaylistCreateConfig : NSObject {
    BOOL _enablePrivateCreate;
    BOOL _isMiniLuna;
    NSString *_title;
    NSString *_completionButtonTitle;
    id /* block */ _completionBlock;
    id /* block */ _cancelBlock;
    id /* block */ _errorBlock;
}

@property (nonatomic) BOOL enablePrivateCreate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *completionButtonTitle;
@property (nonatomic) BOOL isMiniLuna;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ errorBlock;

- (BOOL)isMiniLuna;
- (void)setIsMiniLuna:(BOOL)arg0;
- (void)setEnablePrivateCreate:(BOOL)arg0;
- (BOOL)enablePrivateCreate;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (id)title;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)setTitle:(id)arg0;
- (id /* block */)errorBlock;
- (void)setErrorBlock:(id /* block */)arg0;
- (id)completionButtonTitle;
- (void)setCompletionButtonTitle:(id)arg0;

@end
