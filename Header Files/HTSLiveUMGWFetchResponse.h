//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, HTSLiveUMGWConnectionInfo;

@interface HTSLiveUMGWFetchResponse : GPBMessage

@property (retain, nonatomic) NSMutableArray *businessDataArray;
@property (readonly, nonatomic) unsigned long long businessDataArray_Count;
@property (retain, nonatomic) HTSLiveUMGWConnectionInfo *connectionInfo;
@property (nonatomic) BOOL hasConnectionInfo;
@property (copy, nonatomic) NSString *umgwGlobalExt;

+ (id)descriptor;

@end