//
//     Generated by private class-dump
//

@interface IESLiveReservationApi : HTSLiveApi

- (void)makeGroupReservation:(id)arg0 callBack:(id /* block */)arg1;
- (void)makeSingleReservation:(id)arg0 appointType:(id)arg1 source:(id)arg2 callBack:(id /* block */)arg3;
- (void)cancelGroupReservation:(id)arg0 callBack:(id /* block */)arg1;
- (void)cancelSingleReservation:(id)arg0 appointType:(id)arg1 callBack:(id /* block */)arg2;
- (void)fetchReservationStatus:(id)arg0 callBack:(id /* block */)arg1;

@end