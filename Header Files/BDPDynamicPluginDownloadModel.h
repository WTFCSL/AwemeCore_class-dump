//
//     Generated by private class-dump
//

@class BDPDynamicPluginModel, NSMutableArray;
@protocol BDPNetworkTaskProtocol;

@interface BDPDynamicPluginDownloadModel : NSObject {
    id<BDPNetworkTaskProtocol> _downloadTask;
    BDPDynamicPluginModel *_pluginModel;
    NSMutableArray *_completions;
}

@property (retain, nonatomic) id<BDPNetworkTaskProtocol> downloadTask;
@property (retain, nonatomic) BDPDynamicPluginModel *pluginModel;
@property (retain, nonatomic) NSMutableArray *completions;

- (id)pluginModel;
- (void)setPluginModel:(id)arg0;
- (void)setCompletions:(id)arg0;
- (void).cxx_destruct;
- (id)completions;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg0;

@end