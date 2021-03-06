/*
 * \brief  Array defining order of Linux Kernel initcalls
 * \author Automatically generated file - do no edit
 * \date   2022-02-21
 */

#pragma once

static const char * lx_emul_initcall_order[] = {
	"__initcall_init_hw_perf_eventsearly",
	"__initcall_start",
	"__initcall_init_real_modeearly",
	"__initcall_validate_x2apicearly",
	"__initcall_register_nmi_cpu_backtrace_handlerearly",
	"__initcall_spawn_ksoftirqdearly",
	"__initcall_static_call_initearly",
	"__initcall_init_zero_pfnearly",
	"__initcall_initialize_ptr_randomearly",
	"__initcall_init_mmap_min_addr0",
	"__initcall_pci_realloc_setup_params0",
	"__initcall_reboot_init1",
	"__initcall_wq_sysfs_init1",
	"__initcall_ksysfs_init1",
	"__initcall_rcu_set_runtime_mode1",
	"__initcall_init_jiffies_clocksource1",
	"__initcall_init_script_binfmt1",
	"__initcall_init_elf_binfmt1",
	"__initcall_prandom_init_early1",
	"__initcall_irq_sysfs_init2",
	"__initcall_bdi_class_init2",
	"__initcall_mm_sysfs_init2",
	"__initcall_init_per_zone_wmark_min2",
	"__initcall_pcibus_class_init2",
	"__initcall_pci_driver_init2",
	"__initcall_tty_class_init2",
	"__initcall_vtconsole_class_init2",
	"__initcall_devlink_class_init2",
	"__initcall_software_node_init2",
	"__initcall_amd_postcore_init2",
	"__initcall_bts_init3",
	"__initcall_pt_init3",
	"__initcall_boot_params_ksysfs_init3",
	"__initcall_sbf_init3",
	"__initcall_arch_kdebugfs_init3",
	"__initcall_intel_pconfig_init3",
	"__initcall_pci_arch_init3",
	"__initcall_init_vdso4",
	"__initcall_fixup_ht_bug4",
	"__initcall_topology_init4",
	"__initcall_uid_cache_init4",
	"__initcall_param_sysfs_init4",
	"__initcall_user_namespace_sysctl_init4",
	"__initcall_oom_init4",
	"__initcall_default_bdi_init4",
	"__initcall_percpu_enable_async4",
	"__initcall_init_user_reserve4",
	"__initcall_init_admin_reserve4",
	"__initcall_init_reserve_notifier4",
	"__initcall_pci_slot_init4",
	"__initcall_misc_init4",
	"__initcall_usb_common_init4",
	"__initcall_usb_init4",
	"__initcall_serio_init4",
	"__initcall_input_init4",
	"__initcall_pci_subsys_init4",
	"__initcall_nmi_warning_debugfs5",
	"__initcall_hpet_late_init5",
	"__initcall_init_amd_nbs5",
	"__initcall_iomem_init_inode5",
	"__initcall_clocksource_done_booting5",
	"__initcall_init_pipe_fs5",
	"__initcall_anon_inode_init5",
	"__initcall_proc_cmdline_init5",
	"__initcall_proc_consoles_init5",
	"__initcall_proc_cpuinfo_init5",
	"__initcall_proc_devices_init5",
	"__initcall_proc_interrupts_init5",
	"__initcall_proc_loadavg_init5",
	"__initcall_proc_meminfo_init5",
	"__initcall_proc_stat_init5",
	"__initcall_proc_uptime_init5",
	"__initcall_proc_version_init5",
	"__initcall_proc_softirqs_init5",
	"__initcall_proc_kmsg_init5",
	"__initcall_proc_page_init5",
	"__initcall_init_ramfs_fs5",
	"__initcall_chr_dev_init5",
	"__initcall_pcibios_assign_resources5",
	"__initcall_pci_apply_final_quirks5s",
	"__initcall_populate_rootfsrootfs",
	"__initcall_pci_iommu_initrootfs",
	"__initcall_rapl_pmu_init6",
	"__initcall_amd_uncore_init6",
	"__initcall_amd_ibs_init6",
	"__initcall_msr_init6",
	"__initcall_intel_uncore_init6",
	"__initcall_cstate_pmu_init6",
	"__initcall_register_kernel_offset_dumper6",
	"__initcall_i8259A_init_ops6",
	"__initcall_init_tsc_clocksource6",
	"__initcall_add_rtc_cmos6",
	"__initcall_umwait_init6",
	"__initcall_ioapic_init_ops6",
	"__initcall_sysfb_init6",
	"__initcall_proc_execdomains_init6",
	"__initcall_ioresources_init6",
	"__initcall_timekeeping_init_ops6",
	"__initcall_init_clocksource_sysfs6",
	"__initcall_init_timer_list_procfs6",
	"__initcall_alarmtimer_init6",
	"__initcall_clockevents_init_sysfs6",
	"__initcall_utsname_sysctl_init6",
	"__initcall_perf_event_sysfs_init6",
	"__initcall_kswapd_init6",
	"__initcall_workingset_init6",
	"__initcall_proc_vmalloc_init6",
	"__initcall_fcntl_init6",
	"__initcall_proc_filesystems_init6",
	"__initcall_start_dirtytime_writeback6",
	"__initcall_init_devpts_fs6",
	"__initcall_pci_proc_init6",
	"__initcall_gpio_clk_driver_init6",
	"__initcall_plt_clk_driver_init6",
	"__initcall_n_null_init6",
	"__initcall_pty_init6",
	"__initcall_serial8250_init6",
	"__initcall_serial_pci_driver_init6",
	"__initcall_exar_pci_driver_init6",
	"__initcall_lpss8250_pci_driver_init6",
	"__initcall_mid8250_pci_driver_init6",
	"__initcall_topology_sysfs_init6",
	"__initcall_cacheinfo_sysfs_init6",
	"__initcall_ehci_hcd_init6",
	"__initcall_ehci_pci_init6",
	"__initcall_ohci_hcd_mod_init6",
	"__initcall_ohci_pci_init6",
	"__initcall_uhci_hcd_init6",
	"__initcall_xhci_hcd_init6",
	"__initcall_xhci_pci_init6",
	"__initcall_i8042_init6",
	"__initcall_serport_init6",
	"__initcall_atkbd_init6",
	"__initcall_psmouse_init6",
	"__initcall_pmc_atom_init6",
	"__initcall_usbnet_init6",
	"__initcall_update_mp_table7",
	"__initcall_lapic_insert_resource7",
	"__initcall_print_ICs7",
	"__initcall_create_tlb_single_page_flush_ceiling7",
	"__initcall_init_oops_id7",
	"__initcall_reboot_ksysfs_init7",
	"__initcall_sched_clock_init_late7",
	"__initcall_sched_init_debug7",
	"__initcall_printk_late_init7",
	"__initcall_check_early_ioremap_leak7",
	"__initcall_prandom_init_late7",
	"__initcall_pci_resource_alignment_sysfs_init7",
	"__initcall_pci_sysfs_init7",
	"__initcall_sync_state_resume_initcall7",
	"__initcall_deferred_probe_initcall7",
	"__initcall_clk_disable_unused7s",
	"__initcall_con_initcon",
	"__initcall_end",
	"__initcall_univ8250_console_initcon",
	"END_OF_INITCALL_ORDER_ARRAY_DUMMY_ENTRY"
};
