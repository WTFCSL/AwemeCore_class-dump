//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface LinkedLiveRoomsData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *entryText;
@property (copy, nonatomic) NSString *entryTitleText;
@property (copy, nonatomic) NSString *entrySubTitleText;
@property (retain, nonatomic) NSMutableArray *linkedLiveRoomsArray;
@property (readonly, nonatomic) unsigned long long linkedLiveRoomsArray_Count;
@property (copy, nonatomic) NSString *entryMultiCameraTitleText;
@property (copy, nonatomic) NSString *entryLinkedRoomTitleText;

+ (id)descriptor;

@end
