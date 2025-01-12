//
//     Generated by private class-dump
//

@protocol IESLiveFullLinkMonitor;

@interface IESLiveInteractiveLinkMonitor : NSObject {
    unsigned long long _scene;
    id<IESLiveFullLinkMonitor> _fullLinkMonitor;
}

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;

- (id)fullLinkMonitor;
- (void)setFullLinkMonitor:(id)arg0;
- (void)monitorWithJSON:(id)arg0 error:(id)arg1 apiRequestTime:(double)arg2 path:(id)arg3 extra:(id)arg4;
- (void)monitorWithPB:(id)arg0 error:(id)arg1 apiRequestTime:(double)arg2 path:(id)arg3 extra:(id)arg4;
- (void)appendResponseDictWith:(id)arg0 apiJSONResponse:(id)arg1;
- (void)appendResponseDictWith:(id)arg0 apiPBResponse:(id)arg1;
- (unsigned long long)p_moduleForScene;
- (id)initWithDIContext:(id)arg0 scene:(unsigned long long)arg1;
- (void)monitorAPI:(id)arg0 error:(id)arg1 apiRequestTime:(double)arg2 path:(id)arg3 extra:(id)arg4;
- (void)monitorLinkMessage:(id)arg0 extra:(id)arg1;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)scene;

@end
