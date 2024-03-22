//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableArray;

@interface IESECActionPathImpl : NSObject <IESECActionPath, NSCoding> {
    NSMutableArray *_nodeList;
    long long _needPackFlag;
    NSString *_pathID;
    long long _enterTimestamp;
    long long _quitTimestamp;
}

@property (readonly, nonatomic) NSString *pathID;
@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) long long enterTimestamp;
@property (readonly, nonatomic) long long quitTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)enterTimestamp;
- (id)toJSONStr;
- (id)pathID;
- (long long)quitTimestamp;
- (BOOL)appendActionLogNode:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)nodes;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)toJSON;

@end
