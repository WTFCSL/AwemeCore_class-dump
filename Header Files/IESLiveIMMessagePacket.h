//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;

@interface IESLiveIMMessagePacket : NSObject <IESLiveIMMessagePacket> {
    id object;
    NSDictionary *extra;
    NSArray *messages;
    long long receiveCount;
    long long parseCount;
}

@property (retain, nonatomic) NSArray *messages;
@property (nonatomic) long long receiveCount;
@property (nonatomic) long long parseCount;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) long long pid;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtra:(id)arg0;
- (long long)receiveCount;
- (void)setReceiveCount:(long long)arg0;
- (void)updateExtraWithKey:(id)arg0 value:(id)arg1;
- (long long)parseCount;
- (void)setParseCount:(long long)arg0;
- (void).cxx_destruct;
- (id)object;
- (id)extra;
- (id)messages;
- (void)setObject:(id)arg0;
- (void)setMessages:(id)arg0;

@end
