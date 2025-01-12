//
//     Generated by private class-dump
//

@class NSString, IESLiveReservationApi;

@interface IESLiveReservationApiManager : NSObject <IESLiveReservationApiProvider> {
    IESLiveReservationApi *_reservationApi;
}

@property (retain, nonatomic) IESLiveReservationApi *reservationApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reservationManager;

- (id)reservationApi;
- (void)makeGroupReservation:(id)arg0 completion:(id /* block */)arg1;
- (void)makeSignalReservation:(id)arg0 appointType:(id)arg1 source:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelGroupReservation:(id)arg0 completion:(id /* block */)arg1;
- (void)cancelSignalReservation:(id)arg0 appointType:(id)arg1 completion:(id /* block */)arg2;
- (void)setReservationApi:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
