//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray, DIRSContext;

@interface DIRSEventPacker : NSObject <IRISEventPacker> {
    unsigned long long estimatedLength;
    NSMutableDictionary *package;
    NSMutableDictionary *header;
    NSMutableArray *eventIDs;
    NSMutableArray *events;
    unsigned long long _maxPackLength;
}

@property (nonatomic) unsigned long long maxPackLength;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendCommonParameters:(id)arg0;
- (void)appendFeatureParameters:(id)arg0;
- (void)appendFeatureOptions:(id)arg0;
- (void)_initPacket;
- (unsigned long long)maxPackLength;
- (id)packetEvents;
- (void)setMaxPackLength:(unsigned long long)arg0;
- (id)objectValue;
- (id)init;
- (void).cxx_destruct;
- (long long)appendEvent:(id)arg0;
- (id)serializedData;
- (void)_estimate;
- (id)eventIDs;
- (unsigned long long)estimatedLength;

@end
