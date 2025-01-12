//
//     Generated by private class-dump
//

@class NSString, NSArray;

@protocol IESFileDownloadOptimizeTaskProtocol <IESFileDownloadTaskProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *downloadKey;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) id /* block */ finishNotifyCompletion;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL externalPaused;

- (id)copyTask;
- (void)setFinishNotifyCompletion:(id /* block */)arg0;
- (BOOL)externalPaused;
- (id /* block */)finishNotifyCompletion;
- (void)setExternalPaused:(BOOL)arg0;
- (id)urls;
- (void)resume;
- (id)identifier;
- (void)cancel;
- (void)setUrls:(id)arg0;
- (BOOL)isPaused;
- (void)pause;
- (void)setIdentifier:(id)arg0;
- (id)downloadKey;
- (void)setDownloadKey:(id)arg0;

@end
