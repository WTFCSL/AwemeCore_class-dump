//
//     Generated by private class-dump
//

@class NSString;

@interface BDARVLiveRomModel : JSONModel {
    NSString *_enterFromMerge;
    NSString *_enterMethod;
    NSString *_roomID;
}

@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *roomID;

+ (id)keyMapper;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFromMerge;
- (void)setEnterFromMerge:(id)arg0;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end
