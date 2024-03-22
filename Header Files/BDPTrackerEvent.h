//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol NSCopying;

@interface BDPTrackerEvent : NSObject {
    NSString *_name;
    NSMutableDictionary *_params;
    NSObject<NSCopying> *_groupID;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) NSObject<NSCopying> *groupID;

- (id /* block */)kv;
- (id /* block */)withID;
- (id /* block */)durationFrom;
- (void)setGroupID:(id)arg0;
- (id)initWithEventName:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;
- (id /* block */)flush;
- (id /* block */)record;
- (void)setName:(id)arg0;
- (id /* block */)map;
- (id)params;
- (id)name;
- (void)setParams:(id)arg0;

@end