//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWELifeShelfCardListItemCardDataDrawTicketModel : MTLModel <MTLJSONSerializing> {
    NSString *_drawTicketParams;
    NSArray *_trackParams;
}

@property (copy, nonatomic) NSString *drawTicketParams;
@property (copy, nonatomic) NSArray *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id)drawTicketParams;
- (void)setDrawTicketParams:(id)arg0;
- (void).cxx_destruct;

@end
