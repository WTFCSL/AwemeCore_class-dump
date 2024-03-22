//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECBaseShowEventModel : MTLModel <MTLJSONSerializing> {
    NSString *_eventName;
    NSDictionary *_trackExtraParams;
    NSString *_eventId;
    NSString *_btmID;
}

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *trackExtraParams;
@property (copy, nonatomic) NSString *eventId;
@property (copy, nonatomic) NSString *btmID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)trackExtraParams;
- (void)setTrackExtraParams:(id)arg0;
- (void)setBtmID:(id)arg0;
- (id)btmID;
- (void).cxx_destruct;
- (void)setEventName:(id)arg0;
- (id)eventName;
- (id)eventId;
- (void)setEventId:(id)arg0;

@end
