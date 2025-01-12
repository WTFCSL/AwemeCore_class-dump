//
//     Generated by private class-dump
//

@class HTSEventContext, HTSFormatEnterRoomAisle, NSString;

@interface HTSFormatEventService : NSObject <HTSFormatEventServiceProtocol> {
    double timestampWhenEnterRoom;
    HTSFormatEnterRoomAisle *roomAisle;
    HTSEventContext *_pageContext;
}

@property (retain, nonatomic) HTSEventContext *pageContext;
@property (nonatomic) double timestampWhenEnterRoom;
@property (retain, nonatomic) HTSFormatEnterRoomAisle *roomAisle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)commonParams;
- (void)trackWithEvent:(id)arg0 params:(id)arg1;
- (double)timestampWhenEnterRoom;
- (void)setTimestampWhenEnterRoom:(double)arg0;
- (id)roomAisle;
- (void)setRoomAisle:(id)arg0;
- (id)initWithPageContext:(id)arg0;
- (void).cxx_destruct;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
