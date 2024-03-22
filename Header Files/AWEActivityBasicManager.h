//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray, NSString;

@interface AWEActivityBasicManager : NSObject <AWEManagerProtocol, AWEActivityLifeCycleProtocol> {
    NSMutableArray *_managers;
    id _model;
    id _extraInfo;
}

@property (retain, nonatomic) NSMutableArray *managers;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) id extraInfo;
@property (readonly, nonatomic) NSArray *objcs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtraInfo:(id)arg0;
- (void)channelDidLoad;
- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (id)initWithData:(id)arg0 extraInfo:(id)arg1;
- (void)setData:(id)arg0 extraInfo:(id)arg1;
- (id)objcs;
- (id)getObjectWithIdentifer:(id)arg0;
- (void)setModel:(id)arg0;
- (id)managers;
- (void)timing;
- (void).cxx_destruct;
- (void)removeObject:(id)arg0;
- (id)model;
- (void)addObject:(id)arg0;
- (id)getData;
- (void)setManagers:(id)arg0;
- (void)reset;
- (id)extraInfo;

@end
