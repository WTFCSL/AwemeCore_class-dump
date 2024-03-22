//
//     Generated by private class-dump
//

@class NSString;
@protocol HTSFormatRoomService;

@interface HTSFormatPreloadServiceImpl : NSObject <HTSFormatPreloadService> {
    id<HTSFormatRoomService> _roomService;
}

@property (retain, nonatomic) id<HTSFormatRoomService> roomService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preloadServiceWithFormatRoomModel:(id)arg0;

- (void)startFormatPreload;
- (void)setRoomService:(id)arg0;
- (id)roomService;
- (void).cxx_destruct;

@end