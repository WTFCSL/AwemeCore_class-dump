//
//     Generated by private class-dump
//

@class TTUploadTaskParam;

@interface TTUploadTask : NSObject {
    TTUploadTaskParam *_userParam;
    id /* block */ _userResultBlock;
    id /* block */ _userProgressBlock;
    long long _hadUploadSizeInit;
}

@property (retain) TTUploadTaskParam *userParam;
@property (copy) id /* block */ userResultBlock;
@property (copy) id /* block */ userProgressBlock;
@property long long hadUploadSizeInit;

- (id /* block */)userProgressBlock;
- (void)setHadUploadSizeInit:(long long)arg0;
- (id /* block */)userResultBlock;
- (void)queryUploadProgressAsync:(id /* block */)arg0 param:(id)arg1 status:(long long)arg2;
- (void)setUserResultBlock:(id /* block */)arg0;
- (void)setUserProgressBlock:(id /* block */)arg0;
- (long long)hadUploadSizeInit;
- (void).cxx_destruct;
- (id)userParam;
- (void)cancel;
- (void)setUserParam:(id)arg0;
- (void)start;

@end