//
//     Generated by private class-dump
//

@class GPBInt32ObjectDictionary, HTSLiveUser_FansClub_FansClubData;

@interface HTSLiveUser_FansClub : IESLivePBBaseMessage

@property (readonly, nonatomic) HTSLiveUser_FansClub_FansClubData *displayData;
@property (readonly, nonatomic) HTSLiveUser_FansClub_FansClubData *currentRoomData;
@property (readonly, nonatomic) HTSLiveUser_FansClub_FansClubData *presonalProfile;
@property (readonly, nonatomic) HTSLiveUser_FansClub_FansClubData *otherRoom;
@property (retain, nonatomic) HTSLiveUser_FansClub_FansClubData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) GPBInt32ObjectDictionary *preferData;
@property (readonly, nonatomic) unsigned long long preferData_Count;

+ (id)descriptor;

- (id)otherRoom;
- (id)presonalProfile;
- (id)currentRoomData;
- (id)displayData;

@end
