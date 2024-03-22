//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, FMDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface AWEProfileExtensionAreaAppointmentCardInfoManager : NSObject {
    NSString *_dbPath;
    NSString *_tabName;
    FMDatabase *_db;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSMutableSet *_appointmentInfos;
}

@property (copy, nonatomic) NSString *dbPath;
@property (copy, nonatomic) NSString *tabName;
@property (retain, nonatomic) FMDatabase *db;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (retain, nonatomic) NSMutableSet *appointmentInfos;

+ (id)manager;

- (void)setDbPath:(id)arg0;
- (void)checkShowAppointmentKey:(id)arg0 expiredTime:(double)arg1 completion:(id /* block */)arg2;
- (void)consumptionWithAppointmentKey:(id)arg0 expiredTime:(double)arg1;
- (void)fetchAppointmentWithTime:(double)arg0;
- (void)fetchAppointmentFromDB:(double)arg0;
- (id)appointmentInfos;
- (id)appointmentInfoWith:(id)arg0 expiredTime:(double)arg1;
- (void)insertAppointmentToDB:(id)arg0 expiredTime:(double)arg1;
- (void)setAppointmentInfos:(id)arg0;
- (void)setDb:(id)arg0;
- (id)db;
- (void).cxx_destruct;
- (id)dbPath;
- (id)dbQueue;
- (void)setTabName:(id)arg0;
- (id)tabName;
- (void)setDbQueue:(id)arg0;

@end
