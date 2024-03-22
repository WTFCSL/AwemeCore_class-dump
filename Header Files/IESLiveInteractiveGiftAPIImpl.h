//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveInteractiveGiftAPIImpl : HTSLiveApi <IESLiveInteractiveGiftAPI> {
    id<IESLiveMonitor> _monitor;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchGiftListWithPage:(long long)arg0 count:(long long)arg1 scene:(long long)arg2 callback:(id /* block */)arg3;
- (id)changeGiftListWithPinGiftIds:(id)arg0 normalGiftIds:(id)arg1 scene:(long long)arg2 callback:(id /* block */)arg3;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
