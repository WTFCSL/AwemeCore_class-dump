//
//     Generated by private class-dump
//

@class NSString, IESECBrowseInfo;

@interface IESECTaskInfo : GPBMessage

@property (nonatomic) int taskType;
@property (nonatomic) int taskStatus;
@property (copy, nonatomic) NSString *reportEvent;
@property (retain, nonatomic) IESECBrowseInfo *browseTaskInfo;
@property (nonatomic) BOOL hasBrowseTaskInfo;

+ (id)descriptor;

@end