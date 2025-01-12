//
//     Generated by private class-dump
//

@protocol IESLiveMonitor;

@interface IESLiveInteractiveSEIParser : NSObject {
    id<IESLiveMonitor> _monitor;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;

- (void)parseSEIWith:(id)arg0 completion:(id /* block */)arg1;
- (id)getParseResultWith:(id)arg0 metaSEI:(id)arg1;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
