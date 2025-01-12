//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, TTUploadTaskParam;

@interface TTDispatcherUploadTask : NSObject {
    BOOL _isDeleted;
    NSString *_urlKey;
    TTUploadTaskParam *_userParameters;
    id /* block */ _onRealTask;
    id /* block */ _onRealQueryTask;
    id /* block */ _resultBlock;
    NSMutableArray *_sameTaskResultBlockArray;
}

@property (retain) NSMutableArray *sameTaskResultBlockArray;
@property (copy) NSString *urlKey;
@property BOOL isDeleted;
@property (retain) TTUploadTaskParam *userParameters;
@property (copy) id /* block */ onRealTask;
@property (copy) id /* block */ onRealQueryTask;
@property (copy) id /* block */ resultBlock;

- (void)setSameTaskResultBlockArray:(id)arg0;
- (id)sameTaskResultBlockArray;
- (void)setOnRealTask:(id /* block */)arg0;
- (void)setOnRealQueryTask:(id /* block */)arg0;
- (void)executeAllResultBlock:(id)arg0;
- (void)addResultBlock:(id)arg0;
- (id /* block */)onRealTask;
- (id /* block */)onRealQueryTask;
- (void)setUserParameters:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setResultBlock:(id /* block */)arg0;
- (void)setIsDeleted:(BOOL)arg0;
- (BOOL)isDeleted;
- (void)dealloc;
- (id /* block */)resultBlock;
- (id)userParameters;
- (id)urlKey;
- (void)setUrlKey:(id)arg0;

@end
