//
//     Generated by private class-dump
//

@class NSArray;

@interface IESRegularFileDownloadTask : IESEffectBaseDownloadTask {
    NSArray *_downloadURLs;
}

@property (copy, nonatomic) NSArray *downloadURLs;

- (id)downloadURLs;
- (void)setDownloadURLs:(id)arg0;
- (id)initWithFileDownloadURLs:(id)arg0 destination:(id)arg1;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)arg0;

@end