//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface TTDownloadLogLite : JSONModel {
    NSMutableArray *_errorLogArray;
}

@property (retain) NSMutableArray *errorLogArray;

- (id)errorLogArray;
- (void)setErrorLogArray:(id)arg0;
- (void)addDownloadLog:(id)arg0 error:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end