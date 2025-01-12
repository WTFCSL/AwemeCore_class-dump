//
//     Generated by private class-dump
//

@protocol IESLatchMonitorProtocol, IESLatchJSDataProviderProtocol;

@interface IESLatchContext : NSObject {
    id<IESLatchJSDataProviderProtocol> _jsDataProvider;
    id<IESLatchMonitorProtocol> _monitor;
}

@property (retain, nonatomic) id<IESLatchJSDataProviderProtocol> jsDataProvider;
@property (retain, nonatomic) id<IESLatchMonitorProtocol> monitor;

- (void)setJsDataProvider:(id)arg0;
- (id)jsDataProvider;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
