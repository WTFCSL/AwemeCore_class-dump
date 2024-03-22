//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSMutableDictionary;

@interface TIMXPBNGetMediaUrlsRequestBody : GPBMessage

@property (nonatomic) int sourceAppid;
@property (nonatomic) BOOL hasSourceAppid;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) BOOL hasUri;
@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL encrypted;
@property (nonatomic) BOOL hasEncrypted;
@property (retain, nonatomic) NSMutableArray *imgOptionsArray;
@property (readonly, nonatomic) unsigned long long imgOptionsArray_Count;
@property (retain, nonatomic) NSMutableArray *videoOptionsArray;
@property (readonly, nonatomic) unsigned long long videoOptionsArray_Count;
@property (retain, nonatomic) NSMutableArray *audioOptionsArray;
@property (readonly, nonatomic) unsigned long long audioOptionsArray_Count;
@property (retain, nonatomic) NSMutableArray *fileOptionsArray;
@property (readonly, nonatomic) unsigned long long fileOptionsArray_Count;
@property (copy, nonatomic) NSString *encryptedUri;
@property (nonatomic) BOOL hasEncryptedUri;
@property (nonatomic) int readURLFrom;
@property (nonatomic) BOOL hasReadURLFrom;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
