//
//     Generated by private class-dump
//

@protocol IRISEventPacker <IRISModule>

@property (nonatomic) unsigned long long maxPackLength;

- (unsigned long long)maxPackLength;
- (id)packetEvents;
- (void)setMaxPackLength:(unsigned long long)arg0;
- (id)objectValue;
- (long long)appendEvent:(id)arg0;
- (id)serializedData;
- (id)eventIDs;

@optional

- (void)appendCommonParameters:(id)arg0;
- (void)appendFeatureParameters:(id)arg0;
- (void)appendFeatureOptions:(id)arg0;

@end