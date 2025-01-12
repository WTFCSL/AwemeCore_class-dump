//
//     Generated by private class-dump
//

@class NSString, IESECLiveRoomContext, IESECLiveContext;
@protocol IESECLiveUserRecordActionInterface;

@interface IESECLiveUserActParamsProvider : NSObject <IESECLiveUserParamsProvider> {
    IESECLiveContext *_liveContext;
    IESECLiveRoomContext *_roomContext;
    id<IESECLiveUserRecordActionInterface> _actRecordManager;
}

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) id<IESECLiveUserRecordActionInterface> actRecordManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (id)actRecordManager;
- (void)setRoomContext:(id)arg0;
- (id)clickProductIDArray;
- (id)showProductIDArray;
- (id)userActParamsProviderWithCount:(id)arg0;
- (void)setActRecordManager:(id)arg0;
- (id)curGuideProductID;
- (void).cxx_destruct;
- (id)roomContext;
- (id)initWithRoomContext:(id)arg0;

@end
